# CS351 Project 0 計畫書

## 1. 目的
針對 `Twosum.c` 和整個專案需求，建立明確的專案進度、任務分工與里程碑，協助團隊掌控開發與測試進度。

## 2. 專案範圍
- 實作兩數求和（Two Sum）功能
- 撰寫單元測試與驗收測試
- 完成需求文件（SRS/SDS/plan/test_plan/traceability）
- 準備簡報或最終交付材料

## 3. 核心里程碑
1. 需求確認與範圍界定（已完成或正在進行）
2. 核心程式實作（`Twosum.c`）
3. 單元測試與整合測試完成
4. 文件撰寫與審查（SRS/SDS/ADT/traceability/acceptance）
5. 最終驗收與交付（包裝提交、README、簡報）

## 4. 高階時間表 (假設 4 週專案)
| 週次 | 目標 | 主要任務 | 交付成果 |
|---|---|---|---|
| 1 | 啟動與設計 | - 開會確認需求\n- 設計函式介面與演算法 | `SRS.md` 、 `SDS.md` 初稿 |
| 2 | 實作與測試 | - 撰寫 `Twosum.c`\n- 建立測試案例 | `Twosum.c` 、 `test_plan.md` 、測試報告 |
| 3 | 文件與完善 | - 完成 traceability\n- 增強錯誤處理與邊界條件 | `traceability.md` 、 `known_issues.md` |
| 4 | 收尾與驗收 | - 執行驗收測試\n- 修正問題\n- 完成最終提交 | 最終 pull request、專案報告 |

## 5. 任務列表（可拆分）
- [ ] 技術需求分析
- [ ] API / CLI 定義
- [ ] 演算法實作（Two Sum）
- [ ] 測試實作：正確性、例外情況、效率
- [ ] 程式碼註解與風格統一
- [ ] 文檔補齊：README / SRS / SDS / Test Plan / Traceability / Acceptance Tests
- [ ] 版本控制與分支管理
- [ ] 最終報告書與簡報

## 6. 風險與緩解
- 需求變更：每日同步，快速調整 `plan.md` 與 `traceability.md`
- 測試失敗：保持紅綠循環、先補足單元測試
- 時間不足：優先完成最小可行產品（Twosum + 基本測試）

## 7. 成功標準
- `Twosum.c` 通過所有測試且輸出正確
- 完成指定文件並符合格式
- 各里程碑按時達成，PR 經過 review 通過
- 包含可執行驗收流程的 `acceptance_tests.md`

## 8. 持續更新
- 每次迭代結束後更新本 `plan.md`，記錄完成項目、風險、教訓與後續調整。
