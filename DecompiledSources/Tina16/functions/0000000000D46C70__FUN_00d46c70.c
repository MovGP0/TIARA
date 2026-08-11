/* Ghidra address: 00d46c70 */
/* Ghidra symbol: FUN_00d46c70 */


void FUN_00d46c70(longlong param_1,int *param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  
  iVar1 = *param_2;
  if (iVar1 == 0x201) {
LAB_00d46ca3:
    *(undefined1 *)(param_1 + 0x7c) = 1;
    local_28 = (int)(short)param_2[4];
    local_24 = (int)*(short *)((longlong)param_2 + 0x12);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x1206,0,&local_28);
    if (((local_20 & 4) == 0) && ((local_20 & 8) == 0)) {
      *(undefined4 *)(param_1 + 0x78) = local_1c;
    }
    else {
      *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
    }
  }
  else {
    if (iVar1 != 0x202) {
      if (iVar1 == 0x203) goto LAB_00d46ca3;
      if (iVar1 != 0x205) goto LAB_00d46cfd;
    }
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  }
LAB_00d46cfd:
  FUN_007899d0(param_1,param_2);
  return;
}

