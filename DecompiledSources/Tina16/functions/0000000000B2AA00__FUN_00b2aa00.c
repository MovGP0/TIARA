/* Ghidra address: 00b2aa00 */
/* Ghidra symbol: FUN_00b2aa00 */


undefined1 FUN_00b2aa00(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_51;
  undefined8 local_50;
  undefined2 local_42;
  undefined1 local_3f [23];
  undefined8 local_28;
  longlong local_20 [2];
  
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  FUN_00417580(local_3f,&DAT_00b25e50);
  local_51 = 0;
  iVar2 = FUN_00417170(&LAB_00b2aba0,param_2,1);
  if (0 < iVar2) {
    FUN_00416430(local_20,param_2,1,iVar2 + -1);
    uVar3 = 0;
    if (local_20[0] != 0) {
      uVar3 = *(uint *)(local_20[0] + -4) >> 1;
    }
    if (uVar3 != 0) {
      uVar3 = 0;
      if (param_2 != 0) {
        uVar3 = *(uint *)(param_2 + -4) >> 1;
      }
      FUN_00416430(&local_28,param_2,iVar2 + 1,uVar3 - iVar2);
      FUN_00415530(&local_50,local_28,0);
      cVar1 = FUN_00b29d90(param_1,local_50,local_3f);
      if (cVar1 != '\0') {
        cVar1 = FUN_00b2a090(param_1,local_20[0],&local_42);
        if (cVar1 != '\0') {
          FUN_00417c40(param_3,local_3f,&DAT_00b25e50);
          *(undefined2 *)(param_3 + 9) = local_42;
          *(undefined1 *)(param_3 + 8) = 9;
          local_51 = 1;
        }
      }
    }
  }
  FUN_004144d0(&local_50);
  FUN_00417740(local_3f,&DAT_00b25e50);
  FUN_004145c0(&local_28,2);
  return local_51;
}

