/* Ghidra address: 00bbb9c0 */
/* Ghidra symbol: FUN_00bbb9c0 */


void FUN_00bbb9c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (&stack0x00000000 == (undefined1 *)0x38) {
    FUN_00410ae0(*param_1,0xffffffffffffffe8);
    local_48 = local_50;
    local_40 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_00bb9440,1,
                         L"%s.Entry : the parameter `AEvent\' must be specified.",0xfffffffffffffff0
                         ,0);
    FUN_004134c0(uVar1);
  }
  uVar1 = param_1[1];
  FUN_004ae7e0(uVar1,local_38);
  FUN_004ae7e0(uVar1,local_30);
  FUN_00414480(&local_50);
  return;
}

