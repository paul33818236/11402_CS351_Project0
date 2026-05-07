# Software Design Specification (SDS)

## 1. 概述
本 SDS 說明 `Twosum` 作業的軟體設計與架構，側重演算法、資料結構、模組功能、控制流程、測試策略與可擴充性。

## 2. 系統架構
- 單一核心程式：`Twosum.c`，包含輸入、核心計算邏輯、輸出。
- 測試驅動：單元測試檔案（例如 `test_twosum.c`）與驗收測試資料。
- 輔助文件：`SRS.md`, `plan.md`, `test_plan.md`, `acceptance_tests.md`, `known_issues.md`。

## 3. 模組設計
### 3.1 twosum 核心模組
- 函式：`int* twosum(int* nums, int numsSize, int target, int* returnSize)`
- 參數：
  - `nums`：整數陣列
  - `numsSize`：陣列長度
  - `target`：目標值
  - `returnSize`：輸出索引數量 (2 or 0)
- 回傳：
  - 配對 (`int* out = malloc(2*sizeof(int))`).
  - 如果無解回傳 `NULL` 且 `*returnSize = 0`。

### 3.2 支援函式
- `void print_result(int* indices, int size)`：列印結果或提示無解。
- `int* parse_input(const char* input_str, int* length)`（可選）：原始資料轉換。

## 4. 演算法選擇
### 4.1 時間複雜度目標
- 欲達成 `O(n)`，使用 hash map 進行一次掃描。
- 若作業範圍限定簡單，可先實作 `O(n^2)` 暴力法，但須在 documentation 明確記載。

### 4.2 空間複雜度
- 最佳 `O(n)`，需要額外雜湊表空間。

### 4.3 典型流程
1. 檢查空輸入與 `numsSize < 2`。
2. 對每個 `i`：直接計算 complement = target - nums[i]。
3. 查 hash map 是否含 complement。
4. 如有，回傳 [j, i]。未找到則存入 nums[i] 的索引。
5. 完成後返回 `NULL`；記錄無解。

## 5. 例外處理
- `nums == NULL` 或 `numsSize <= 0`：`returnSize=0`、`NULL`。
- 整數溢出：使用 64 位暫存 `long long` 計算 complement。
- 重複值處理：允許但不可重用同一索引兩次。

## 6. 測試策略
### 6.1 單元測試
- 常見情境：`[2,7,11,15], target=9`
- 重複、負數、全零、多答案、無解、邊界值。
- `nums` 空陣列、長度1。

### 6.2 驗收測試
- 使用 `acceptance_tests.md` 中 A1~A10 案例。

### 6.3 迴歸測試
- 修 bug 後加入新用例，確保未再回歸。

## 7. 非功能需求
- 可移植性：純標準 C，編譯器跨平台（gcc/clang）。
- 可維護性：清晰註解、統一命名、模組化。
- 可測試性：測試程式應與核心功能分離，方便自動化執行。

## 8. 可擴充規劃
- 延伸至 `k-sum` 或 `three sum`。
- 支援 CLI 異動（讀檔、命令行參數）
- 整合記憶體/效能分析（Valgrind、profiling）。
