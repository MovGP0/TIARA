/* Ghidra address: 00bb0130 */
/* Ghidra symbol: FUN_00bb0130 */


void FUN_00bb0130(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40 [2];
  longlong *local_30 [2];
  
  local_60 = 0;
  local_50 = 0;
  local_58 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_40[0] = (longlong *)0x0;
  local_30[0] = (longlong *)0x0;
  cVar1 = (**(code **)(*param_2 + 0xa0))(param_2);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x20))(param_2,local_40);
    iVar2 = (**(code **)(*local_40[0] + 0x18))();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*param_2 + 0x20))(param_2,&local_48);
        (**(code **)(*local_48 + 0x20))(local_48,local_30,iVar4);
        cVar1 = (**(code **)(*local_30[0] + 0x48))(local_30[0]);
        if (cVar1 == '\x01') {
          FUN_0041b890(&local_58,local_30[0],&DAT_00bb0310);
          (**(code **)(*local_58 + 0x40))(local_58,&local_50);
          iVar3 = FUN_00416db0(local_50,*(undefined8 *)(param_1 + 0x50));
          if (iVar3 == 0) {
            (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x48) + 0x60))
                      ((longlong *)**(undefined8 **)(param_1 + 0x48),&local_60,local_30[0]);
          }
        }
        FUN_00bb0130(param_1,local_30[0]);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_0041b800(&local_60);
  FUN_0041b800(&local_58);
  FUN_00414480(&local_50);
  FUN_00417840(&local_48,&DAT_00b9f960,2);
  FUN_0041b800(local_30);
  return;
}

