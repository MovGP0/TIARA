/* Ghidra address: 01130140 */
/* Ghidra symbol: FUN_01130140 */


void FUN_01130140(longlong param_1,undefined2 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined2 *local_50;
  undefined8 local_48;
  undefined2 *local_40;
  undefined1 local_38 [24];
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_60 = auStack_98;
  local_68 = 0;
  FUN_0046e790(param_1,local_38);
  FUN_0046e7d0(param_1,local_38,param_3);
  cVar1 = FUN_0046e8d0(param_1,local_38);
  if (cVar1 == '\0') {
    FUN_0046e790(param_1,local_20);
    FUN_0046e7f0(param_1,local_20,local_38,5);
    local_78 = 8;
    local_50 = param_2;
    local_58 = FUN_01130b40(&PTR_FUN_0112fdd0,1,local_18,0x20);
    *(undefined8 *)(local_50 + 4) = local_58;
    FUN_0046e7b0(param_1,local_20);
  }
  else {
    local_40 = param_2;
    FUN_0046e8f0(param_1,&local_68,local_38);
    local_78 = 8;
    local_48 = FUN_011309d0(&PTR_FUN_0112fdd0,1,local_68,0x20);
    *(undefined8 *)(local_40 + 4) = local_48;
  }
  *param_2 = *(undefined2 *)(param_1 + 8);
  FUN_0046e7b0(param_1,local_38);
  FUN_00414480(&local_68);
  return;
}

