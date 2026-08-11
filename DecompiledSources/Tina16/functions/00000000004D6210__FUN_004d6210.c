/* Ghidra address: 004d6210 */
/* Ghidra symbol: FUN_004d6210 */


undefined8 * FUN_004d6210(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = DAT_02011660;
  if (DAT_02011668 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)thunk_FUN_041b4712(0,0x1000,0x1000,0x40);
    *puVar3 = DAT_02011660;
    FUN_00409a70(&DAT_01dcc674,puVar3 + 1,8);
    puVar3[2] = FUN_004d61d0;
    puVar1 = puVar3 + 3;
    do {
      puVar4 = puVar1;
      *(undefined1 *)puVar4 = 0xe8;
      uVar2 = FUN_004d6200(puVar4,puVar3 + 1);
      *(undefined4 *)((longlong)puVar4 + 1) = uVar2;
      *(undefined8 **)((longlong)puVar4 + 5) = DAT_02011668;
      puVar1 = (undefined8 *)((longlong)puVar4 + 0x15);
      DAT_02011668 = puVar4;
    } while (((longlong)puVar4 + 0x15) - (longlong)puVar3 < 0xfed);
  }
  DAT_02011660 = puVar3;
  puVar4 = DAT_02011668;
  puVar3 = (undefined8 *)((longlong)DAT_02011668 + 5);
  puVar1 = (undefined8 *)((longlong)DAT_02011668 + 0xd);
  DAT_02011668 = (undefined8 *)*(undefined8 *)((longlong)DAT_02011668 + 5);
  *puVar3 = *param_1;
  *puVar1 = param_1[1];
  return puVar4;
}

