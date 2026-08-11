/* Ghidra address: 01ccdc70 */
/* Ghidra symbol: FUN_01ccdc70 */


void FUN_01ccdc70(longlong param_1,longlong param_2,char param_3)

{
  undefined1 uVar1;
  
  if (param_3 != '\0') {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    uVar1 = FUN_01cd6670(param_2);
    *(undefined1 *)(param_1 + 0xf0) = uVar1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
            (*(longlong **)(param_1 + 0x98),*(undefined8 *)(param_2 + 0x98));
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))
            (*(longlong **)(param_1 + 0xa0),*(undefined8 *)(param_2 + 0xa0));
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  FUN_01cd6740(param_1,*(undefined4 *)(param_2 + 0x74));
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  return;
}

