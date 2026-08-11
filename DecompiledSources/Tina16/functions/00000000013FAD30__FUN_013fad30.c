/* Ghidra address: 013fad30 */
/* Ghidra symbol: FUN_013fad30 */


void FUN_013fad30(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x6e0) + 0x90))
            ((longlong *)**(undefined8 **)(param_1 + 0x6e0));
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      cVar2 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x6b0),iVar4);
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar4);
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x6e0) + 0x78))
                  ((longlong *)**(undefined8 **)(param_1 + 0x6e0),local_30[0]);
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_30);
  return;
}

