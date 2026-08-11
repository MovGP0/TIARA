/* Ghidra address: 01d769a0 */
/* Ghidra symbol: FUN_01d769a0 */


void FUN_01d769a0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 *local_38;
  char local_2a;
  char local_29 [9];
  
  local_38 = (undefined1 *)FUN_004095c0(0x238);
  DAT_03567c68 = local_38;
  *local_38 = 1;
  local_29[0] = '\x01';
  local_2a = '\x02';
  pcVar1 = &local_2a;
  FUN_00dd5710(DAT_03567c68 + 0x10,1,0,local_29,pcVar1,1,1,1,0,0,0,0,0,0xc);
  *(undefined1 *)(*(longlong *)(DAT_03567c68 + 0x10) + 6) = *DAT_03567c68;
  FUN_016e9e20(param_1,local_29[0]);
  FUN_016e9cd0(param_1,local_2a + -2);
  (**(code **)(*(longlong *)(*(longlong *)(DAT_03567c68 + 0x10) + 8) + 8))
            (*(longlong *)(DAT_03567c68 + 0x10),param_1,param_2);
  FUN_016ebe60(param_1,local_29[0],1,0,(ulonglong)pcVar1 & 0xffffffffffffff00);
  FUN_016ed320(param_1,local_29[0],0,*(undefined8 *)(param_2 + 0x430),0);
  local_38[1] = local_29[0];
  local_29[0] = local_29[0] + '\x01';
  FUN_016e9f40(param_1,FUN_01d767c0);
  FUN_016ea050(param_1,&local_38,8);
  return;
}

