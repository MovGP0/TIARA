/* Ghidra address: 00b637b0 */
/* Ghidra symbol: FUN_00b637b0 */


void FUN_00b637b0(longlong param_1,int param_2,int param_3,undefined4 param_4,int *param_5,
                 undefined4 *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = 0;
  do {
    lVar4 = FUN_00b598d0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0x18)
                          + 8),param_4);
    uVar5 = FUN_00b53830(*(undefined8 *)(lVar4 + 0x20),param_2);
    iVar2 = FUN_00b50950(uVar5);
    iVar6 = iVar6 + iVar2;
    if (iVar6 < param_3) {
      cVar1 = FUN_00b14cb0(param_2 + 1);
      if (cVar1 == '\0') {
        *param_5 = param_2;
        uVar3 = FUN_00b41460(iVar2,iVar2);
        *param_6 = uVar3;
        return;
      }
      param_2 = param_2 + 1;
    }
  } while (iVar6 < param_3);
  *param_5 = param_2;
  if (iVar2 < 1) {
    *param_6 = 0;
  }
  else {
    uVar3 = FUN_00b41460(iVar2 - (iVar6 - param_3),iVar2);
    *param_6 = uVar3;
  }
  return;
}

