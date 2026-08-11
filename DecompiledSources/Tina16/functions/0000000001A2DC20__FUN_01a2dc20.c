/* Ghidra address: 01a2dc20 */
/* Ghidra symbol: FUN_01a2dc20 */


void FUN_01a2dc20(undefined8 param_1,int param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414480(&local_10);
  if (param_2 == 1) {
    FUN_00414b50(&local_10,L"PME: invalid handle");
  }
  if (param_2 == 2) {
    FUN_00414b50(&local_10,L"PME: pme info cant run");
  }
  if (param_2 == 3) {
    FUN_00414b50(&local_10,L"PME: process cant open");
  }
  if (param_2 == 4) {
    FUN_00414b50(&local_10,L"PME: process not found");
  }
  FUN_00414480(&local_10);
  return;
}

