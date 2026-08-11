/* Ghidra address: 0199c990 */
/* Ghidra symbol: FUN_0199c990 */


void FUN_0199c990(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_017b9b40(0,&PTR_FUN_017b8848,0x66);
  puVar2 = (undefined4 *)FUN_004095c0(0x1f);
  *puVar2 = 0x66;
  puVar2[1] = 0x105;
  puVar2[2] = 0x13;
  *(undefined1 *)(puVar2 + 3) = 0;
  uVar3 = FUN_00b95b20(0,0,5,5);
  *(undefined8 *)((longlong)puVar2 + 0xd) = uVar3;
  *(undefined4 *)((longlong)puVar2 + 0x15) = param_4;
  *(undefined4 *)((longlong)puVar2 + 0x19) = param_4;
  *(undefined2 *)((longlong)puVar2 + 0x1d) = 1;
  FUN_004ae7e0(plVar1[8],puVar2);
  *(undefined4 *)((longlong)plVar1 + 0xc) = param_2;
  *(undefined4 *)(plVar1 + 2) = param_3;
  *(undefined1 *)((longlong)plVar1 + 0x24) = 1;
  (**(code **)(*param_1 + 0x20))(param_1,plVar1);
  (**(code **)(*plVar1 + 0xa0))(plVar1,param_1[0x42]);
  return;
}

