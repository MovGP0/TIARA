/* Ghidra address: 00b86b60 */
/* Ghidra symbol: FUN_00b86b60 */


byte FUN_00b86b60(void)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  undefined1 local_2d [13];
  
  FUN_0040d200(local_2d,5,0);
  plVar3 = (longlong *)FUN_00b6ca10(&PTR_FUN_00b86690,1,0);
  (**(code **)(*plVar3 + 0xa8))(plVar3,&DAT_01e93cd8,0x28,0);
  (**(code **)(*plVar3 + 0xc0))(plVar3,&DAT_01e93cdd,local_2d,5);
  bVar1 = FUN_0043e2c0(local_2d,&DAT_01e93ce2,5);
  (**(code **)(*plVar3 + 0xb8))(plVar3);
  (**(code **)(*plVar3 + 200))(plVar3,local_2d,local_2d,5);
  bVar2 = FUN_0043e2c0(local_2d,&DAT_01e93cdd,5);
  (**(code **)(*plVar3 + 0xb0))(plVar3);
  FUN_00410f20(plVar3);
  return bVar1 & bVar2;
}

