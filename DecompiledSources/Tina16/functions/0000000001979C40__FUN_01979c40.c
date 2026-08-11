/* Ghidra address: 01979c40 */
/* Ghidra symbol: FUN_01979c40 */


void FUN_01979c40(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = 0;
  FUN_00414480(&local_20);
  if (param_2 != 0) {
    iVar2 = FUN_00414cb0(param_2);
    if (0 < iVar2) {
      do {
        if (*(short *)(param_2 + -2 + (longlong)iVar2 * 2) == 0x5c) {
          uVar3 = FUN_00414cb0(param_2);
          FUN_00416dc0(&local_20,param_2,iVar2 + 1,uVar3);
          break;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_20 == 0) {
      FUN_00414b50(&local_20,param_2);
    }
    else {
      FUN_00414b50(&local_28,param_2);
      iVar2 = FUN_00414cb0(local_28);
      iVar4 = FUN_00414cb0(local_20);
      iVar5 = FUN_00414cb0(local_20);
      FUN_00416e20(&local_28,iVar2 - iVar4,iVar5 + 1);
    }
  }
  lVar6 = FUN_0197a550(param_1,local_28,0,0);
  if (lVar6 != 0) {
    if (param_2 == 0) {
      lVar6 = param_1[0x1c];
    }
    else {
      lVar6 = FUN_0197d120(lVar6,local_20,0);
    }
    cVar1 = (**(code **)(*param_1 + 0xa0))(param_1,lVar6);
    if (cVar1 == '\0') {
      if (lVar6 == param_1[0x1c]) {
        if (param_3 != '\0') {
          FUN_0197aab0(param_1,*(undefined8 *)(lVar6 + 0x38));
        }
      }
      else {
        FUN_00410f20(lVar6);
      }
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

