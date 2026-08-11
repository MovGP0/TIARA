/* Ghidra address: 00745fe0 */
/* Ghidra symbol: FUN_00745fe0 */


void FUN_00745fe0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_38 [16];
  
  if ((char)param_1[0x99] != '\0') {
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0xe0))(param_1,local_38);
      (**(code **)(*param_1 + 0x1a8))(param_1,local_38);
      FUN_00745810(param_1,local_38);
    }
  }
  iVar3 = FUN_007470a0(param_1[0x98],param_2);
  if (iVar3 < 0) {
    FUN_0065ef40(param_1,param_2,param_3);
  }
  else {
    lVar4 = FUN_00747090(param_1[0x98],iVar3);
    uVar1 = FUN_00745220(param_1,*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24));
    *param_3 = uVar1;
  }
  return;
}

