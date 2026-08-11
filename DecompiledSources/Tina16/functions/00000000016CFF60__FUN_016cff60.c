/* Ghidra address: 016cff60 */
/* Ghidra symbol: FUN_016cff60 */


void FUN_016cff60(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined2 local_30 [4];
  
  FUN_004b9ec0(*(undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x244) = param_3;
  *(undefined1 *)(param_1 + 0xb80) = 0;
  *(undefined1 *)(param_1 + 0xc80) = 0;
  FUN_004144d0(param_1 + 0xd88);
  FUN_004144d0(param_1 + 0xd80);
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined1 *)(param_1 + 0x9a3) = 0;
  *(undefined4 *)(param_1 + 0x998) = param_2;
  FUN_01d34d40(*(undefined8 *)(param_1 + 0x9b8));
  (**(code **)(**(longlong **)(param_1 + 0xa70) + 0x10))(*(longlong **)(param_1 + 0xa70));
  (**(code **)(**(longlong **)(param_1 + 0xa78) + 0x10))(*(longlong **)(param_1 + 0xa78));
  FUN_01d34d40(*(undefined8 *)(param_1 + 0x9e0));
  FUN_01d34d40(*(undefined8 *)(param_1 + 0x9f8));
  FUN_01d34d40(*(undefined8 *)(param_1 + 0x9c8));
  FUN_01d34d40(*(undefined8 *)(param_1 + 0xa20));
  (**(code **)(**(longlong **)(param_1 + 0xa48) + 0x90))(*(longlong **)(param_1 + 0xa48));
  FUN_01d34d40(*(undefined8 *)(param_1 + 0xa28));
  FUN_01d34d40(*(undefined8 *)(param_1 + 0xa08));
  FUN_01d34d40(*(undefined8 *)(param_1 + 0xa10));
  FUN_01d34d40(*(undefined8 *)(param_1 + 0xa38));
  FUN_01d34d40(*(undefined8 *)(param_1 + 0xa28));
  local_30[0] = 0x3001;
  uVar1 = FUN_016a4560(&DAT_0169ffe0,1,local_30,0);
  (**(code **)(**(longlong **)(param_1 + 0xa28) + 0x50))(*(longlong **)(param_1 + 0xa28),uVar1);
  (**(code **)(**(longlong **)(param_1 + 0xa50) + 0x90))(*(longlong **)(param_1 + 0xa50));
  (**(code **)(**(longlong **)(param_1 + 0xa50) + 0x80))
            (*(longlong **)(param_1 + 0xa50),&DAT_016d011c,0);
  *(undefined8 *)(param_1 + 0x20) = 0x2000130100000200;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x9a5) = param_4;
  FUN_0040d200(*(undefined8 *)(param_1 + 0x50),200,0);
  return;
}

