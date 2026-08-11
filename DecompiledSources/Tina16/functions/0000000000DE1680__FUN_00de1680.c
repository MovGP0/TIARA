/* Ghidra address: 00de1680 */
/* Ghidra symbol: FUN_00de1680 */


undefined8
FUN_00de1680(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5,longlong param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + 0x558;
  }
  FUN_0041b840(param_2,lVar2);
  FUN_0041b800(param_3);
  FUN_0064d000(param_1,&local_38);
  *param_4 = local_38;
  param_4[1] = uStack_30;
  thunk_FUN_0415f13b(param_5,0,0,0x7fff,0x7fff);
  *(undefined4 *)(param_6 + 4) = 0;
  uVar1 = FUN_0065b4d0(param_1);
  *(undefined8 *)(param_6 + 8) = uVar1;
  *(undefined8 *)(param_6 + 0x10) = 0;
  *(undefined4 *)(param_6 + 0x18) = 0;
  return 0;
}

