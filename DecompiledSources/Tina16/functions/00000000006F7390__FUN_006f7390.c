/* Ghidra address: 006f7390 */
/* Ghidra symbol: FUN_006f7390 */


undefined8 FUN_006f7390(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40 [3];
  
  uVar4 = 0;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    local_40[0] = CONCAT44(param_3,param_2);
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_041b2403(uVar3,0x1012,0,local_40);
    if (iVar2 != -1) {
      uVar4 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar2);
    }
  }
  return uVar4;
}

