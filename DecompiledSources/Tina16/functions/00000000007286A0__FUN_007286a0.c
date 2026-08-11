/* Ghidra address: 007286a0 */
/* Ghidra symbol: FUN_007286a0 */


uint FUN_007286a0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 local_res10 [3];
  uint local_c;
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00414480(param_1 + 0xa0);
  FUN_0041b840(param_1 + 0xe0,local_res10[0]);
  pcVar1 = (code *)FUN_00411550(param_1,0xffe6);
  local_c = (*pcVar1)(param_1,*(undefined8 *)(param_1 + 0xe0),param_1 + 0xa0);
  if ((local_c & 0x80000000) == 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffec);
    uVar2 = (*pcVar1)(param_1);
    local_c = *(uint *)(&DAT_01e05d24 + (uVar2 & 0xff) * 4);
  }
  FUN_0041b800(param_1 + 0xe0);
  FUN_0041b800(local_res10);
  return local_c;
}

