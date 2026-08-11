/* Ghidra address: 00c02800 */
/* Ghidra symbol: FUN_00c02800 */


void FUN_00c02800(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c10e70(param_1);
  FUN_00c10e80(param_1,0);
  if (*(longlong *)(param_1 + 0x850) == 0) {
    if (*(longlong *)(param_1 + 0x4e8) != *(longlong *)(param_1 + 0x4f0)) {
      FUN_00c02640(param_1);
    }
  }
  else {
    FUN_00c02b00(param_1);
  }
  *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x7f8) = *(undefined8 *)(param_2 + 0xa0);
  *(longlong *)(param_2 + 0xa0) = param_1;
  *(code **)(param_2 + 0x98) = FUN_00c02300;
  *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x808) = *(undefined8 *)(param_2 + 0xb0);
  *(longlong *)(param_2 + 0xb0) = param_1;
  *(code **)(param_2 + 0xa8) = FUN_00c02350;
  *(undefined8 *)(param_1 + 0x810) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0x818) = *(undefined8 *)(param_2 + 0xc0);
  *(longlong *)(param_2 + 0xc0) = param_1;
  *(code **)(param_2 + 0xb8) = FUN_00c023c0;
  *(undefined8 *)(param_1 + 0x820) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0x828) = *(undefined8 *)(param_2 + 0xd0);
  *(longlong *)(param_2 + 0xd0) = param_1;
  *(code **)(param_2 + 200) = FUN_00c02430;
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x838) = *(undefined8 *)(param_2 + 0x90);
  *(longlong *)(param_2 + 0x90) = param_1;
  *(code **)(param_2 + 0x88) = FUN_00c024a0;
  *(undefined8 *)(param_1 + 0x840) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x848) = *(undefined8 *)(param_2 + 0x80);
  *(longlong *)(param_2 + 0x80) = param_1;
  *(code **)(param_2 + 0x78) = FUN_00c024f0;
  *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_1 + 0x860) = *(undefined8 *)(param_3 + 0x40);
  *(longlong *)(param_3 + 0x40) = param_1;
  *(code **)(param_3 + 0x38) = FUN_00c02540;
  *(undefined8 *)(param_1 + 0x868) = *(undefined8 *)(param_4 + 0x38);
  *(undefined8 *)(param_1 + 0x870) = *(undefined8 *)(param_4 + 0x40);
  *(longlong *)(param_4 + 0x40) = param_1;
  *(code **)(param_4 + 0x38) = FUN_00c02540;
  *(longlong *)(param_1 + 0x4e8) = param_2;
  *(longlong *)(param_1 + 0x550) = param_3;
  *(longlong *)(param_1 + 0x558) = param_4;
  FUN_00c02a60();
  FUN_00c10e80(param_1,uVar1);
  return;
}

