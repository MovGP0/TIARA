/* Ghidra address: 00656320 */
/* Ghidra symbol: FUN_00656320 */


bool FUN_00656320(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_40;
  int local_3c;
  short *local_38;
  uint local_30;
  int iStack_2c;
  
  lVar1 = thunk_FUN_041d93e9();
  lVar2 = FUN_0065b870();
  if (lVar1 == lVar2) {
    if ((DAT_01df5bf8 == 0) || (lVar1 = DAT_01df5bf8, *(longlong *)(DAT_01df5bf8 + 0x78) != param_1)
       ) {
      lVar1 = 0;
    }
  }
  else {
    local_38 = (short *)(param_2 + 4);
    local_40 = (int)*local_38;
    local_3c = (int)*(short *)((longlong)param_2 + 0x12);
    lVar1 = FUN_00656230(param_1,&local_40,0,0,0);
  }
  if (lVar1 != 0) {
    local_30 = (int)*(short *)(param_2 + 4) - *(int *)(lVar1 + 0x90);
    iStack_2c = (int)*(short *)((longlong)param_2 + 0x12) - *(int *)(lVar1 + 0x94);
    uVar3 = FUN_0064fca0(lVar1,*param_2,(longlong)(int)param_2[2],
                         (longlong)(int)(local_30 & 0xffff | iStack_2c * 0x10000));
    *(undefined8 *)(param_2 + 6) = uVar3;
  }
  return lVar1 != 0;
}

