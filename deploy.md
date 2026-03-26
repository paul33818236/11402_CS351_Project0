# 部署計畫（Deployment Plan）

本文件為專案交付環境與部署流程說明，主要適用於課程作業提交與範例運作驗證。

## 1. 目標
- 編譯並驗證 `Twosum.c` 的功能與測試
- 以可重現流程完成 CI 或本地環境測試
- 提供可讀文件與一鍵指令，方便助教或評分者檢視結果

## 2. 環境需求
- 作業系統：Ubuntu 20.04 以上 (支持 macOS/Linux)
- 編譯器：`gcc` >= 9.0
- 開發工具：`make`, `git`、測試框架（如 `cmocka`、`Unity` 可選）
- 依賴：無第三方庫（純標準 C ）

## 3. 本地部署步驟
1. 從 GitHub clone 專案：
   - `git clone https://github.com/paul33818236/11402_CS351_Project0.git`
   - `cd 11402_CS351_Project0`
2. 文字檔驗證：檢查已有文件（`
README.md`, `SRS.md`, `plan.md` 等）。
3. 透過 Makefile 編譯（若有）：
   - `make all` 或 `make build`
   - 執行 `./Twosum`（若為 CLI 程式）
4. 執行測試：
   - `make test` 或 `./run_tests` (視實作而定)
5. 產生報告：
   - `make coverage` (若支援)，或手動檢查 `test_report` 內容

## 4. CI 建議（GitHub Actions）
- 建立 `.github/workflows/ci.yml`，包含：
  - 檢出程式碼：`actions/checkout@v4`
  - 安裝依賴：`gcc`, `make`
  - 編譯：`make build`
  - 測試：`make test`
  - (可選) 覆蓋率：`make coverage`
- 觸發條件：
  - PR 建立
  - main 分支 push
- 成功準則：
  - 編譯通過
  - 測試通過
  - 靜態檢查（例如 `clang-format`、`s )` not used?)

## 5. 部署驗證事項
- 所有 must-have 測試案例通過
- `acceptance_tests.md` 案例逐一記錄結果
- 釋出分支可直接用 `git tag v1.0` 標記作業完成

## 6. 回滾與修復
- 若部署後發現 fail，第一時間修正後提交到新分支 `fix/<issue>`。
- 對已 merge 的錯誤，備註 PR 與 issue，並使用 `git revert` 保留已通過版本。

## 7. 最終交付
- 提交 PR 時附上:
  - 變更列表
  - 測試結果與報告截圖
  - 已知問題與改善計畫（參考 `known_issues.md`）
- 確認 README 中有明確執行指令與評分指引。
