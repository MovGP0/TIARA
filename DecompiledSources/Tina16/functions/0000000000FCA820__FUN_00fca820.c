/* Ghidra address: 00fca820 */
/* Ghidra symbol: FUN_00fca820 */


void FUN_00fca820(longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0xc78));
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))
            (*(longlong **)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0xc7c));
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
            (*(longlong **)(param_1 + 0x6e8),*(undefined4 *)(param_1 + 0xc80));
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
            (*(longlong **)(param_1 + 0x730),*(undefined4 *)(param_1 + 0xc9c));
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))
            (*(longlong **)(param_1 + 0x738),*(undefined4 *)(param_1 + 0xc98));
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_1 + 0xc88);
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(param_1 + 0xc90);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0xc78));
  if (*(int *)(param_1 + 0x848) == 9) {
    FUN_00fcacb0(param_1,param_2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x268))
            (*(longlong **)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0xc7c));
  FUN_00fcb2e0(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
            (*(longlong **)(param_1 + 0x6e8),*(undefined4 *)(param_1 + 0xc80));
  if (*(int *)(param_1 + 0x848) == 8) {
    FUN_00fcb990(param_1,param_2);
  }
  FUN_004169a0(local_20,param_1 + 0xcc5);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x748),local_20[0]);
  FUN_004169a0(&local_28,param_1 + 0xcb0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x750),local_28);
  *(uint *)(param_1 + 0x848) = (uint)*(byte *)(param_1 + 0x851);
  if (*(byte *)(param_1 + 0x851) == 8) {
    FUN_0064de00(DAT_0202efd8,L"PIC UART Receiver");
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x708),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x760),0);
  }
  if (*(int *)(param_1 + 0x848) == 9) {
    FUN_0064de00(DAT_0202efd8,L"PIC UART Transmitter");
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x738),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x720),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),0);
  }
  FUN_00414560(&local_28,2);
  return;
}

