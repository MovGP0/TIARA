/* Ghidra address: 00c98c10 */
/* Ghidra symbol: FUN_00c98c10 */


undefined8 * FUN_00c98c10(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 local_1c;
  
  FUN_00419260(param_1,&DAT_0086e978,1,0x40);
  iVar1 = (*DAT_01ea9b28)(param_2,*param_1,&local_1c);
  if (iVar1 != 1) {
    FUN_00c99220(&PTR_FUN_00c983a8,L"EVP_DigestFinal_ex error");
  }
  FUN_00419260(param_1,&DAT_0086e978,1,local_1c);
  (*DAT_01ea9ca0)(param_2);
  FUN_004095f0(param_2);
  return param_1;
}

