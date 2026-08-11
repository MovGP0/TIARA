/* Ghidra address: 00729000 */
/* Ghidra symbol: FUN_00729000 */


uint FUN_00729000(longlong param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 local_res10 [3];
  byte local_19 [9];
  
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00414480(param_1 + 0xa0);
  local_19[0] = 1;
  FUN_0041b840(param_1 + 0xe0,local_res10[0]);
  pcVar2 = (code *)FUN_00411550(param_1,0xffe6);
  uVar1 = (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0xe0),param_1 + 0xa0);
  if ((uVar1 & 0x80000000) == 0) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffeb);
    (*pcVar2)(param_1,local_19);
  }
  *param_3 = (uint)local_19[0];
  FUN_0041b800(param_1 + 0xe0);
  FUN_0041b800(local_res10);
  return uVar1;
}

