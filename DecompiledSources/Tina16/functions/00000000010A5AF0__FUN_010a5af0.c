/* Ghidra address: 010a5af0 */
/* Ghidra symbol: FUN_010a5af0 */


void FUN_010a5af0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [3];
  
  local_50[0] = 0;
  local_58 = 0;
  local_40[0] = 0;
  plVar2 = (longlong *)FUN_01b21480(*(undefined8 *)(param_1 + 0xa18));
  (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x90))(*(longlong **)(param_1 + 0x9c8));
  iVar1 = (**(code **)(*plVar2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(longlong *)(param_2 + 0x18) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar3 * 8);
      }
      (**(code **)(*plVar2 + 0x18))(plVar2,local_50,iVar3);
      FUN_00b8fd60(&local_58,uVar4,
                   *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78) + 0x94),0,1
                  );
      FUN_00416cd0(local_40,3,local_50[0],&LAB_010a5c88,local_58);
      (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x78))
                (*(longlong **)(param_1 + 0x9c8),local_40[0]);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar2);
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  return;
}

