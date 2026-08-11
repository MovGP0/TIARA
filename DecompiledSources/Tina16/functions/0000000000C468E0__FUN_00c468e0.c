/* Ghidra address: 00c468e0 */
/* Ghidra symbol: FUN_00c468e0 */


undefined4 FUN_00c468e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_004b9ca0(param_1,local_res10[0],param_3,param_4);
  }
  else {
    uVar1 = FUN_0044d490(&PTR_FUN_00436b60,1,L"TBufferMemoryStream.Read");
    FUN_004134c0(uVar1);
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return local_c;
}

