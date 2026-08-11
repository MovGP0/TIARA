/* Ghidra address: 016516c0 */
/* Ghidra symbol: FUN_016516c0 */


double * FUN_016516c0(longlong param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  double local_2040 [501];
  undefined1 local_1098;
  longlong local_100 [13];
  undefined1 local_98;
  longlong *local_30;
  
  local_98 = 0;
  local_1098 = 0;
  FUN_016ee260(param_3,&local_30,0xd0,0);
  plVar2 = local_30;
  plVar3 = local_100;
  for (lVar1 = 0x1a; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  local_2040[0] =
       *(double *)(*(longlong *)(param_4 + 0x118) + (longlong)*(int *)(local_100[3] + 4) * 8) -
       *(double *)(*(longlong *)(param_4 + 0x118) + (longlong)*(int *)(local_100[3] + 8) * 8);
  dVar4 = (double)FUN_016586b0(*(undefined8 *)(param_1 + 0x30),param_4,
                               *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),0,local_2040,0,0,0
                              );
  *param_2 = dVar4 - *(double *)(param_1 + 0x50);
  return param_2;
}

