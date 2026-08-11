/* Ghidra address: 01bff530 */
/* Ghidra symbol: FUN_01bff530 */


void FUN_01bff530(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2f30);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
    (**(code **)(*param_1 + 0x88))(param_1,*(undefined4 *)(param_2 + 0x8c));
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
    uVar2 = FUN_01bff290(param_2);
    *(undefined4 *)(param_1 + 0x12) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
    (**(code **)(*param_1 + 0x90))(param_1,*(undefined4 *)(param_2 + 0x9c));
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    uVar2 = FUN_01bff2c0(param_2);
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar2;
    param_1[0x1b] = *(longlong *)(param_2 + 0xd8);
    param_1[0x1c] = *(longlong *)(param_2 + 0xe0);
  }
  return;
}

