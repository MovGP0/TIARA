/* Ghidra address: 00650f70 */
/* Ghidra symbol: FUN_00650f70 */


void FUN_00650f70(longlong *param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48;
  int local_44;
  short *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
    FUN_0064e190(param_1,0);
  }
  if ((*(uint *)((longlong)param_1 + 0xa4) & 2) != 0) {
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffffffd;
    (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
    local_58 = local_38;
    uStack_50 = uStack_30;
    local_40 = (short *)(param_2 + 0x10);
    local_48 = (int)*local_40;
    local_44 = (int)*(short *)(param_2 + 0x12);
    cVar1 = FUN_00423210(&local_58,&local_48);
    if (cVar1 != '\0') {
      pcVar2 = (code *)FUN_00411550(param_1,0xffea);
      (*pcVar2)(param_1);
    }
  }
  FUN_00650ef0(param_1,param_2,0);
  return;
}

