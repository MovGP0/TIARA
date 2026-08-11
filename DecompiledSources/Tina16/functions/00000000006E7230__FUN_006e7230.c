/* Ghidra address: 006e7230 */
/* Ghidra symbol: FUN_006e7230 */


void FUN_006e7230(undefined8 param_1,byte param_2)

{
  undefined1 local_8c [4];
  undefined4 local_88;
  uint local_84;
  
  FUN_006e6d80(param_1,local_8c);
  local_88 = 0xf;
  if ((param_2 & 1) != 0) {
    local_84 = local_84 | 1;
  }
  if ((param_2 & 2) != 0) {
    local_84 = local_84 | 2;
  }
  if ((param_2 & 4) != 0) {
    local_84 = local_84 | 4;
  }
  if ((param_2 & 8) != 0) {
    local_84 = local_84 | 8;
  }
  FUN_006e6f00(param_1,local_8c);
  return;
}

