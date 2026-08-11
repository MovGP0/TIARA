/* Ghidra address: 01c0c160 */
/* Ghidra symbol: FUN_01c0c160 */


void FUN_01c0c160(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    if (cVar1 == '\0') {
      if (*(char *)((longlong)param_1 + 0x363) == '\0') {
        cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
        if (cVar1 != '\0') goto LAB_01c0c1b5;
      }
      else {
LAB_01c0c1b5:
        if ((param_1[100] != 0) && (*(char *)(param_1[100] + 0x94) == '\0')) {
          uVar3 = FUN_01c07120(param_1);
          lVar4 = FUN_01c03e40(uVar3);
          FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar4 + 0xb4));
          goto LAB_01c0c249;
        }
      }
      uVar3 = FUN_01c07120(param_1);
      lVar4 = FUN_01c03e40(uVar3);
      FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar4 + 0x8c));
      goto LAB_01c0c249;
    }
  }
  uVar3 = FUN_01c07120(param_1);
  lVar4 = FUN_01c03e40(uVar3);
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar4 + 0x8c));
LAB_01c0c249:
  FUN_01bd35f0(param_1,param_2);
  return;
}

