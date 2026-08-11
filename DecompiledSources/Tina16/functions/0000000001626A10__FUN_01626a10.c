/* Ghidra address: 01626a10 */
/* Ghidra symbol: FUN_01626a10 */


void FUN_01626a10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_40;
  undefined1 local_34;
  undefined1 local_33 [2];
  undefined1 local_31 [9];
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_78;
  cVar1 = FUN_01613aa0(param_2,L"model",&local_28);
  if (cVar1 == '\0') {
    FUN_01613110(L"Gate: model parameter not found");
  }
  local_1c = FUN_0040c840(local_28);
  if (*(char *)(param_3 + 0x139e5) == '\0') {
    local_58 = &LAB_01626bd8;
    local_50 = (undefined1 *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_18 = FUN_0172bd70(&PTR_FUN_01729478,1,param_1,0);
    local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_0172d840(param_1,0,(undefined1)local_1c,1);
    FUN_01d03190(param_1,local_1c + 1,1);
    FUN_00410f20(local_10);
    FUN_00410f20(local_18);
  }
  else {
    local_58 = local_33;
    local_50 = &local_34;
    puVar2 = (undefined2 *)FUN_01cfde70(param_1,1,1,local_31);
    *puVar2 = (undefined2)local_1c;
  }
  return;
}

