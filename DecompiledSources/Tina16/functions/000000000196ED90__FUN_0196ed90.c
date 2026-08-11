/* Ghidra address: 0196ed90 */
/* Ghidra symbol: FUN_0196ed90 */


void FUN_0196ed90(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_004d2dc0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_0191d1a8);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(param_2,&PTR_FUN_01948f80);
      if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x210) == param_2)) {
        *(undefined8 *)(param_1 + 0x210) = 0;
      }
    }
    else {
      lVar3 = FUN_0196d420(*(undefined8 *)(param_1 + 0x170),param_2);
      if (lVar3 != 0) {
        uVar4 = FUN_0196d420(*(undefined8 *)(param_1 + 0x170),param_2);
        FUN_00410f20(uVar4);
      }
      if (*(longlong *)(param_1 + 0x160) == param_2) {
        *(undefined8 *)(param_1 + 0x160) = 0;
      }
      plVar1 = *(longlong **)(param_1 + 0x178);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x3b8))(plVar1);
      }
    }
  }
  return;
}

