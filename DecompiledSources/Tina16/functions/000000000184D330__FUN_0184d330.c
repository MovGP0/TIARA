/* Ghidra address: 0184d330 */
/* Ghidra symbol: FUN_0184d330 */


longlong FUN_0184d330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_00410ae0(param_2,&local_10);
  lVar1 = FUN_0184cde0(param_1,local_10);
  if (lVar1 == 0) {
    local_18 = FUN_0184a020(&PTR_FUN_01845a18,1,param_2,param_3);
    *(undefined8 *)(local_18 + 0xa8) = param_1;
    FUN_0184caa0(param_1,*(undefined8 *)(local_18 + 0x20),local_18);
    lVar1 = FUN_0184cde0(param_1,param_3);
    if (lVar1 != 0) {
      *(undefined8 *)(local_18 + 0x98) = *(undefined8 *)(lVar1 + 0x98);
    }
  }
  FUN_00414480(&local_10);
  return local_18;
}

