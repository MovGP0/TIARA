/* Ghidra address: 017a43a0 */
/* Ghidra symbol: FUN_017a43a0 */


void FUN_017a43a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  for (lVar2 = FUN_006dd580(param_2); lVar2 != 0; lVar2 = FUN_006dd3e0(lVar2)) {
    cVar1 = FUN_006dd2b0(lVar2);
    if (cVar1 == '\0') {
      uVar3 = FUN_00609e10(**(undefined8 **)(param_1 + 0x98));
      FUN_007d6c70(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x780),uVar3,
                   *(undefined4 *)(param_1 + 0x6c),0,*(undefined4 *)(lVar2 + 0x28),1);
      if (**(longlong **)(param_1 + 0xa0) != 0) {
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xa0) + 0x78))
                  ((longlong *)**(undefined8 **)(param_1 + 0xa0),*(undefined8 *)(lVar2 + 0x10));
      }
      *(int *)(param_1 + 0x6c) =
           *(int *)(param_1 + 0x6c) +
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x780) + 0x94);
    }
    else {
      FUN_017a43a0(param_1,lVar2);
    }
  }
  return;
}

