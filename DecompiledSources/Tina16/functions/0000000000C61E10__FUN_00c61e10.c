/* Ghidra address: 00c61e10 */
/* Ghidra symbol: FUN_00c61e10 */


bool FUN_00c61e10(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool local_271;
  undefined8 local_270;
  undefined1 local_268 [592];
  longlong *local_18;
  longlong *local_10;
  
  local_270 = 0;
  local_10 = (longlong *)0x0;
  local_18 = (longlong *)0x0;
  local_271 = false;
  uVar3 = FUN_0041b800(&local_10);
  iVar2 = thunk_FUN_041d73d1(PTR_DAT_02003438,0,1,PTR_DAT_02005460,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (iVar2 == 0) {
    uVar3 = FUN_0041b800(&local_18);
    cVar1 = FUN_00452340(local_10,&DAT_01ea61d8,uVar3);
    if (cVar1 != '\0') {
      uVar3 = FUN_00416740(param_2);
      iVar2 = (**(code **)(*local_18 + 0x28))(local_18,uVar3,0);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*local_10 + 0x98))(local_10,param_1,0);
        if (iVar2 == 0) {
          FUN_004169f0(param_3,0x104);
          uVar3 = FUN_00416740(*param_3);
          iVar2 = (**(code **)(*local_10 + 0x18))(local_10,uVar3,0x104,local_268,CONCAT44(uVar4,2));
          local_271 = iVar2 == 0;
          if (local_271) {
            FUN_0043ea00(&local_270,*param_3);
            FUN_00414ad0(param_3,local_270);
          }
        }
      }
    }
  }
  FUN_00414480(&local_270);
  FUN_0041b800(&local_18);
  FUN_0041b800(&local_10);
  return local_271;
}

