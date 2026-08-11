/* Ghidra address: 00c89260 */
/* Ghidra symbol: FUN_00c89260 */


byte FUN_00c89260(void)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  undefined1 local_3c [28];
  
  FUN_0040d200(local_3c,0x14,0);
  plVar3 = (longlong *)FUN_004d22d0(&PTR_FUN_00c88318,1,0);
  (**(code **)(*plVar3 + 0xa8))(plVar3);
  FUN_00b6be30(plVar3,&DAT_00c89338);
  (**(code **)(*plVar3 + 0xb0))(plVar3,local_3c);
  bVar1 = FUN_0043e2c0(local_3c,&DAT_01ea8ed8,0x10);
  (**(code **)(*plVar3 + 0xa8))(plVar3);
  FUN_00b6be30(plVar3,"abcdefghijklmnopqrstuvwxyz");
  (**(code **)(*plVar3 + 0xb0))(plVar3,local_3c);
  bVar2 = FUN_0043e2c0(local_3c,&DAT_01ea8ee8,0x10);
  FUN_00410f20(plVar3);
  return bVar1 & bVar2;
}

