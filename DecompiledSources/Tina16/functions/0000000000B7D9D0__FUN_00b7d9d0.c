/* Ghidra address: 00b7d9d0 */
/* Ghidra symbol: FUN_00b7d9d0 */


byte FUN_00b7d9d0(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  undefined1 local_30 [16];
  
  FUN_0040d200(local_30,8,0);
  plVar5 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b7d528,1,0);
  (**(code **)(*plVar5 + 0xa8))(plVar5,&DAT_01e90114,0x80,0);
  (**(code **)(*plVar5 + 0x110))(plVar5,&DAT_01e90124,local_30);
  bVar1 = FUN_0043e2c0(local_30,&DAT_01e9012c,8);
  (**(code **)(*plVar5 + 0x118))(plVar5,local_30,local_30);
  bVar2 = FUN_0043e2c0(local_30,&DAT_01e90124,8);
  (**(code **)(*plVar5 + 0xb0))(plVar5);
  (**(code **)(*plVar5 + 0xa8))(plVar5,&DAT_01e90134,0x80,0);
  (**(code **)(*plVar5 + 0x110))(plVar5,&DAT_01e90144,local_30);
  bVar3 = FUN_0043e2c0(local_30,&DAT_01e9014c,8);
  (**(code **)(*plVar5 + 0x118))(plVar5,local_30,local_30);
  bVar4 = FUN_0043e2c0(local_30,&DAT_01e90144,8);
  (**(code **)(*plVar5 + 0xb0))(plVar5);
  FUN_00410f20(plVar5);
  return bVar1 & bVar2 & bVar3 & bVar4;
}

