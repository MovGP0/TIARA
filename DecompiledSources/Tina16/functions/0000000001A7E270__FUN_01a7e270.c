/* Ghidra address: 01a7e270 */
/* Ghidra symbol: FUN_01a7e270 */


void FUN_01a7e270(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_38 [24];
  
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa90),1);
    FUN_01a794b0(param_1,param_2);
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
        uVar4 = FUN_004113f0(uVar4,&DAT_01cdd500);
        FUN_01ce1ae0(uVar4);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_01a782f0(param_1,local_38);
    cVar2 = FUN_01acf9e0(*(undefined8 *)(param_1 + 0x798),local_38);
    if (cVar2 == '\0') {
      FUN_01acfc60(*(undefined8 *)(param_1 + 0x798));
    }
    else {
      FUN_01acfa60(*(undefined8 *)(param_1 + 0x798));
    }
    FUN_01aceb90(*(undefined8 *)(param_1 + 0x798),1);
  }
  return;
}

