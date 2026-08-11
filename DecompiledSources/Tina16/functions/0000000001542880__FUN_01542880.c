/* Ghidra address: 01542880 */
/* Ghidra symbol: FUN_01542880 */


undefined8
FUN_01542880(longlong param_1,ulonglong param_2,undefined8 param_3,int *param_4,int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char local_66 [19];
  byte local_53;
  char local_52;
  short local_51;
  short local_4f;
  
  uVar2 = 1;
  uVar1 = FUN_01d06f90(param_1);
  FUN_00c3d330(uVar1,local_66,
               CONCAT62((int6)((param_2 & 0xffffffff) >> 0x10),(short)(param_2 & 0xffffffff) + -1));
  FUN_004169a0(param_3,local_66);
  if (((local_53 & 2) != 0) && (local_66[0] == '\0')) {
    FUN_00414ad0(param_3,&LAB_0154293c);
  }
  if (local_52 == '\x02') {
    uVar2 = 2;
  }
  if (local_52 == '\0') {
    uVar2 = 1;
  }
  *param_4 = (int)local_51 + *(int *)(param_1 + 0xc);
  *param_5 = (int)local_4f + *(int *)(param_1 + 0x10);
  return uVar2;
}

