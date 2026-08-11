/* Ghidra address: 0196bd90 */
/* Ghidra symbol: FUN_0196bd90 */


void FUN_0196bd90(longlong param_1,undefined8 param_2,double param_3,double param_4,double param_5,
                 double param_6)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_0197cb70(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(char *)(param_1 + 0x20a) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x168);
    uVar3 = FUN_01966ad0(plVar1);
    iVar2 = FUN_00605610(uVar3);
    (**(code **)(*plVar1 + 0xd8))(plVar1,(double)iVar2);
    plVar1 = *(longlong **)(param_1 + 0x168);
    uVar3 = FUN_01966ad0(plVar1);
    iVar2 = FUN_00605640(uVar3);
    (**(code **)(*plVar1 + 0xe0))(plVar1,(double)iVar2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0xd8))
              (*(longlong **)(param_1 + 0x168),
               ((*(double *)(param_1 + 0x238) - *(double *)(param_1 + 0x1a8)) -
               *(double *)(param_1 + 0x1c8)) * DAT_01fb7da0);
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0xe0))
              (*(longlong **)(param_1 + 0x168),
               ((*(double *)(param_1 + 0x228) - *(double *)(param_1 + 0x1e0)) -
               *(double *)(param_1 + 0x178)) * DAT_01fb7da0);
  }
  if ((*(char *)(param_1 + 0x208) != '\0') &&
     ((*(char *)(param_1 + 0xc1) == '\0' || (*(char *)(param_1 + 0x209) != '\0')))) {
    (**(code **)(**(longlong **)(param_1 + 0x168) + 0x260))
              (*(longlong **)(param_1 + 0x168),param_2,param_3,param_4,
               param_5 + *(double *)(param_1 + 0x1a8) * DAT_01fb7da0 * param_3,
               param_6 + *(double *)(param_1 + 0x1e0) * DAT_01fb7da0 * param_4);
  }
  return;
}

