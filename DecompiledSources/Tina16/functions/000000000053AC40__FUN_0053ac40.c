/* Ghidra address: 0053ac40 */
/* Ghidra symbol: FUN_0053ac40 */


ulonglong FUN_0053ac40(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined1 local_30 [16];
  
  FUN_00417580(param_3,&DAT_00527bf8);
  if (param_2 != &DAT_004033c8) {
    puVar1 = (undefined *)FUN_00536180(param_1);
    if (param_2 != puVar1) {
      uVar4 = 0;
      goto LAB_0053ac83;
    }
  }
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
LAB_0053ac83:
  if ((char)uVar4 == '\0') {
    uVar2 = FUN_00536180(param_1);
    plVar3 = (longlong *)FUN_00589390(uVar2);
    while( true ) {
      if ((plVar3 == (longlong *)0x0) || (*plVar3 == 0)) goto LAB_0053acbf;
      if (*(undefined **)*plVar3 == param_2) break;
      plVar3 = (longlong *)FUN_00589390(*(undefined **)*plVar3);
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
LAB_0053acbf:
  if ((char)uVar4 != '\0') {
    FUN_00538320(param_1,local_30);
    uVar2 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538080(local_30,param_2,uVar2);
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar4 & 0xffffffff;
}

