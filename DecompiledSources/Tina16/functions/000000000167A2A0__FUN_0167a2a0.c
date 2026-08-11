/* Ghidra address: 0167a2a0 */
/* Ghidra symbol: FUN_0167a2a0 */


void FUN_0167a2a0(int *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 in_RAX;
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50 [6];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    local_50[0] = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                       *(undefined1 *)((longlong)param_1 + 0x11),(char)param_1[4],0)
    ;
    local_50[0] = (double)*param_1 * local_50[0];
    dVar2 = (double)FUN_00db20f0(param_2,param_3,local_50[0],*(undefined8 *)(param_1 + 0xe),
                                 *(undefined8 *)(param_1 + 0x36),*(undefined8 *)(param_1 + 0x50),
                                 *(undefined8 *)(param_1 + 0x52),&local_60,local_50);
    local_58 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                    *(undefined1 *)((longlong)param_1 + 0x11),
                                    *(undefined1 *)((longlong)param_1 + 0xf),0);
    local_58 = (double)*param_1 * local_58;
    uVar3 = FUN_00db20f0(param_2,param_3,local_58,*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(param_1 + 0x36),*(undefined8 *)(param_1 + 0x50),
                         *(undefined8 *)(param_1 + 0x52),&local_68,&local_58);
    FUN_016ed320(param_2,(char)param_1[2] + '\x01',
                 (double)*param_1 * (dVar2 - local_50[0] * local_60),local_60,0);
    FUN_016ed320(param_2,(char)param_1[2] + '\x02',uVar3,local_68,0);
    *(double *)(param_1 + 0xe) = local_50[0];
    *(double *)(param_1 + 0x10) = local_58;
  }
  return;
}

