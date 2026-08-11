/* Ghidra address: 0065dd90 */
/* Ghidra symbol: FUN_0065dd90 */


void FUN_0065dd90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_50 [2];
  undefined8 local_40;
  int local_38;
  int iStack_34;
  int *local_30;
  int local_28;
  int local_24;
  short *local_20;
  
  if (*(longlong *)(param_2 + 0x18) == 0) {
    local_20 = (short *)(param_2 + 0x10);
    local_28 = (int)*local_20;
    local_24 = (int)*(short *)(param_2 + 0x12);
    local_50[0] = FUN_0064d3a0(param_1,&local_28);
    lVar1 = FUN_00656230(param_1,local_50,0,0,0);
    if (lVar1 != 0) {
      local_30 = (int *)(param_2 + 0x10);
      local_38 = (int)*(short *)local_30;
      iStack_34 = (int)*(short *)(param_2 + 0x12);
      local_40 = CONCAT44(iStack_34,local_38);
      uVar2 = FUN_0064fca0(lVar1,0x7b,0,(longlong)*local_30);
      *(undefined8 *)(param_2 + 0x18) = uVar2;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      FUN_00652190(param_1,param_2);
    }
  }
  return;
}

