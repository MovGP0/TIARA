/* Ghidra address: 01b9f800 */
/* Ghidra symbol: FUN_01b9f800 */


void FUN_01b9f800(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  cVar2 = FUN_0199e300(*(undefined8 *)(param_1 + 0x700));
  if (cVar2 != '\0') {
    FUN_00805990(param_1);
    puVar1 = *(undefined8 **)(param_1 + 0x708);
    if (puVar1 != (undefined8 *)0x0) {
      uVar4 = (**(code **)*puVar1)(puVar1);
      FUN_00418590(uVar4,&DAT_01984da0);
    }
    *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(param_1 + 0x700);
    uVar4 = *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
    *(undefined8 *)(param_1 + 0x700) = uVar4;
    FUN_019a57f0(uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x6e8) + 0x4a0),1,0);
    FUN_019a57f0(*(undefined8 *)(param_1 + 0x708),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x4a0),1,0);
    iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        FUN_0068bd10(*(undefined8 *)(param_1 + 0x6f0),iVar5,1);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_01b9f630(param_1,0);
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  *(undefined4 *)(param_1 + 0x508) = 1;
  return;
}

