/* Ghidra address: 01c9d110 */
/* Ghidra symbol: FUN_01c9d110 */


void FUN_01c9d110(void)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,
               L"http://focus.ti.com/analog/docs/gencontent.tsp?familyId=02&genContentId=33361");
  uVar1 = FUN_00416740(local_10);
  thunk_FUN_0419adcc(0,L"open",uVar1,0,0,1);
  FUN_00414480(&local_10);
  return;
}

