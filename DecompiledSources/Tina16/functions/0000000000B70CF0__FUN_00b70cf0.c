/* Ghidra address: 00b70cf0 */
/* Ghidra symbol: FUN_00b70cf0 */


byte FUN_00b70cf0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  undefined1 local_30 [16];
  
  FUN_0040d200(local_30,8,0);
  plVar5 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b70868,1,0);
  (**(code **)(*plVar5 + 0xa8))(plVar5,&DAT_01e8a858,0x40,0);
  (**(code **)(*plVar5 + 0x110))(plVar5,&DAT_01e8a868,local_30);
  bVar1 = FUN_0043e2c0(local_30,&DAT_01e8a878,8);
  (**(code **)(*plVar5 + 0xb8))(plVar5);
  (**(code **)(*plVar5 + 0x118))(plVar5,local_30,local_30);
  bVar2 = FUN_0043e2c0(local_30,&DAT_01e8a868,8);
  (**(code **)(*plVar5 + 0xb0))(plVar5);
  (**(code **)(*plVar5 + 0xa8))(plVar5,&DAT_01e8a860,0x40,0);
  (**(code **)(*plVar5 + 0x110))(plVar5,&DAT_01e8a870,local_30);
  bVar3 = FUN_0043e2c0(local_30,&DAT_01e8a880,8);
  (**(code **)(*plVar5 + 0xb8))(plVar5);
  (**(code **)(*plVar5 + 0x118))(plVar5,local_30,local_30);
  bVar4 = FUN_0043e2c0(local_30,&DAT_01e8a870,8);
  (**(code **)(*plVar5 + 0xb0))(plVar5);
  FUN_00410f20(plVar5);
  return bVar1 & bVar2 & bVar3 & bVar4;
}

