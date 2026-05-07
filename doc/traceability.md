# Traceability Matrix (追蹤矩陣)

本文件提供需求、設計、測試與驗收間的對應關係，方便檢核是否全面落實。

## 1. 需求對應
| 需求項目 | 來源檔案 | 對應設計 (SDS) | 對應測試 (Test Plan) | 對應驗收 (Acceptance) |
|---|---|---|---|---|
| 1. Two Sum 基本功能 | SRS 2.1 | SDS 3.1~3.3 | T1~T4 | A1~A5 |
| 2. 重複元素支援 | SRS 2.2 | SDS 3.1~3.3 | T2 | A2 |
| 3. 負數支援 | SRS 2.2 | SDS 3.1~3.3 | T3 | A3 |
| 4. 無解處理 | SRS 2.1 | SDS 3.1~3.3 | T4 | A5 |
| 5. 邊界條件 (空 / 長度 1) | SRS 2.2 | SDS 4.1 | T5~T6 | A6~A7 |
| 6. 速度 & 複雜度需求 | SRS 3 | SDS 4.1 | N/A | N/A |
| 7. 整數邊界值 | SRS 2.2 | SDS 5 | T9 | A10 |

## 2. 設計追蹤
| 設計項目 | SDS 節點 | 是否已實作 | 測試案例 |
|---|---|---|---|
| twosum 函式接口 | 3.1 | 是 | T1~T9 |
| 例外處理 | 5 | 是 | T4~T6, T9 |
| 演算法複雜度 | 4 | 是/待優化 | T1~T5 |

## 3. 測試覆蓋
| 測試項目 | 測試檔 | 驗收項目 | PASS 條件 |
|---|---|---|---|
| 基本正確性 | test_twosum.c | A1 | 通過 |
| 高風險邊界 | test_twosum.c | A2~A10 | 通過 |
| CI 連續整合 | .github/workflows/ci.yml | 所有 | 通過 |

## 4. 追蹤與版本管理
- 每次需求變更時更新本檔與 `SRS`、`test_plan`，並記錄 commit message：`traceability: update for <feature>`。
- 啟用標籤 `traceable` 與 `non-traceable` 於 issue，確保全部需求都有覆蓋。
- 定期審視覆蓋：需求缺口補測、測試失敗補 bug。

## 5. 未追蹤項目與待辦
- 目前尚未實作：完整 `make coverage` 與 CI 的覆蓋率報告，待 `deploy` 加入。
- 如有新需求（如 UI/檔案輸入），須新增追蹤矩陣行並補相應測試。
