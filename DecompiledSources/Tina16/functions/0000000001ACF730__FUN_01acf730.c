/* Ghidra address: 01acf730 */
/* Ghidra symbol: FUN_01acf730 */


void FUN_01acf730(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5,char param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_6 == '\0') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
    iVar4 = 1;
    if (0 < iVar1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                          (*(longlong **)(param_1 + 0xe0),iVar4 + -1);
        plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
        (**(code **)(*plVar3 + 0x90))(plVar3,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    iVar4 = 1;
    if (0 < iVar1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar4 + -1);
        uVar2 = FUN_004113f0(uVar2,&DAT_01cdd500);
        FUN_01ce5e00(uVar2,*(undefined8 *)(param_1 + 0x80),param_2,param_3,0,param_1 + 0x109);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_01acef70(param_1);
  }
  return;
}

