/* Ghidra address: 00b43820 */
/* Ghidra symbol: FUN_00b43820 */


void FUN_00b43820(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 local_38 [16];
  
  iVar6 = (int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),(ushort)*(byte *)(param_2 + 0x24)) << 4;
  FUN_00b25840(*(undefined8 *)(param_1 + 0x78),
               CONCAT22((short)((uint)iVar6 >> 0x10),(short)iVar6 + 2));
  FUN_00b25840(*(undefined8 *)(param_1 + 0x78),0xf007);
  iVar6 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x78));
  FUN_00b25870(*(undefined8 *)(param_1 + 0x78),0);
  FUN_00b25810(*(undefined8 *)(param_1 + 0x78),*(undefined1 *)(param_2 + 0x24));
  FUN_00b25810(*(undefined8 *)(param_1 + 0x78),*(undefined1 *)(param_2 + 0x24));
  FUN_0040d200(local_38,0x10,0);
  FUN_00b258a0(*(undefined8 *)(param_1 + 0x78),local_38,0x10);
  FUN_00b25840(*(undefined8 *)(param_1 + 0x78),0xff);
  if ((byte)(*(char *)(param_2 + 0x24) - 2U) < 2) {
    iVar3 = (**(code **)**(undefined8 **)(param_2 + 8))(*(undefined8 **)(param_2 + 8));
    iVar3 = iVar3 + 8;
  }
  else {
    iVar3 = (**(code **)**(undefined8 **)(param_2 + 8))(*(undefined8 **)(param_2 + 8));
    iVar3 = iVar3 + 0x19;
  }
  FUN_00b25870(*(undefined8 *)(param_1 + 0x78),iVar3);
  FUN_00b25870(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_2 + 0x18));
  FUN_00b25870(*(undefined8 *)(param_1 + 0x78),0);
  FUN_00b25870(*(undefined8 *)(param_1 + 0x78),0);
  bVar1 = *(byte *)(param_2 + 0x24);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      FUN_00b25840(*(undefined8 *)(param_1 + 0x78),0x46a0);
    }
    else if (bVar1 == 2) {
      FUN_00b25840(*(undefined8 *)(param_1 + 0x78),0x3d40);
    }
    else if (bVar1 == 3) {
      FUN_00b25840(*(undefined8 *)(param_1 + 0x78),0x2160);
    }
  }
  else if (bVar1 == 6) {
    FUN_00b25840(*(undefined8 *)(param_1 + 0x78),0x6e00);
  }
  else if (bVar1 == 7) {
    FUN_00b25840(*(undefined8 *)(param_1 + 0x78),0x7a80);
  }
  FUN_00b25840(*(undefined8 *)(param_1 + 0x78),*(byte *)(param_2 + 0x24) - 0xfe8);
  FUN_00b25870(*(undefined8 *)(param_1 + 0x78),iVar3 + -8);
  if ((*(char *)(param_2 + 0x24) != '\x02') && (*(char *)(param_2 + 0x24) != '\x03')) {
    FUN_00b258a0(*(undefined8 *)(param_1 + 0x78),local_38,0x10);
    FUN_00b25810(*(undefined8 *)(param_1 + 0x78),0xff);
  }
  (**(code **)(**(longlong **)(param_2 + 8) + 0x48))(*(longlong **)(param_2 + 8),0,0);
  puVar2 = *(undefined8 **)(param_2 + 8);
  uVar5 = (**(code **)*puVar2)(puVar2);
  FUN_004b8ba0(*(undefined8 *)(param_1 + 0x78),puVar2,uVar5);
  uVar4 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x78),(longlong)iVar6);
  FUN_00b25870(*(undefined8 *)(param_1 + 0x78),(*(int *)(param_1 + 0x3c) - iVar6) + -4);
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x78),(longlong)*(int *)(param_1 + 0x3c));
  return;
}

