/* Ghidra address: 00bc6650 */
/* Ghidra symbol: FUN_00bc6650 */


void FUN_00bc6650(longlong param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (param_4 == '\0') {
    *(undefined2 *)(param_1 + 0x5e) = 0x18;
  }
  else {
    *(undefined2 *)(param_1 + 0x5e) = 0x21;
  }
  FUN_00bc5ea0(*(undefined8 *)(param_1 + 0x90),0x17,*(undefined8 *)(param_1 + 0x50),3);
  uVar5 = FUN_00bc5e20(*(undefined8 *)(param_1 + 0x90),*(undefined2 *)(param_1 + 0x5e));
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x90) + 0x160);
  if (puVar3 == (undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x15c)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x90) + 0x168);
    *piVar2 = *piVar2 + 6;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x50);
    *puVar3 = param_2;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x160);
    *plVar1 = *plVar1 + 4;
    **(undefined4 **)(*(longlong *)(param_1 + 0x90) + 0x160) = param_3;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x160);
    *plVar1 = *plVar1 + 4;
    **(undefined4 **)(*(longlong *)(param_1 + 0x90) + 0x160) =
         (int)(((lVar4 + 0xc) - (longlong)puVar3) / 2);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x90) + 0x160);
    *plVar1 = *plVar1 + 4;
  }
  FUN_00bc5d80(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x48));
  if (*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x160) != *(longlong *)(param_1 + 0x90) + 0x15c)
  {
    FUN_00bc5d80(*(undefined8 *)(param_1 + 0x90),*(longlong *)(param_1 + 0x50) + 6,
                 *(undefined8 *)(param_1 + 0x48));
  }
  return;
}

