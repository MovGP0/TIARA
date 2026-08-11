/* Ghidra address: 0157c840 */
/* Ghidra symbol: FUN_0157c840 */


void FUN_0157c840(uint param_1,double *param_2)

{
  char cVar1;
  ushort local_res8;
  ushort uStackX_a;
  double local_28;
  double local_20 [2];
  
  uStackX_a = (ushort)(param_1 >> 0x10);
  cVar1 = FUN_00448b70((uStackX_a >> 9) + 0x7bc,uStackX_a >> 5 & 0xf,uStackX_a & 0x1f,local_20);
  if (cVar1 != '\0') {
    local_res8 = (ushort)param_1;
    cVar1 = FUN_00448a10(local_res8 >> 0xb,local_res8 >> 5 & 0x3f,(param_1 & 0x1f) * 2,0,&local_28);
    if (cVar1 != '\0') {
      *param_2 = local_20[0] + local_28;
    }
  }
  return;
}

