/* Ghidra address: 01c75310 */
/* Ghidra symbol: FUN_01c75310 */


void FUN_01c75310(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(longlong *)(param_1 + 0x27a8) != 0) {
    FUN_0198d580(*(longlong *)(param_1 + 0x27a8),&local_28,*PTR_DAT_02002480,PTR_DAT_02004010[0x816]
                 ,PTR_DAT_02004010[0x814],*PTR_DAT_020037e8,PTR_DAT_02004010[0x815],
                 *PTR_DAT_02001560,*PTR_DAT_02005310,0x1c7);
    uVar1 = thunk_FUN_03f3ed25(local_20,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
    uVar2 = thunk_FUN_03f3ed25(local_1c,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
    FUN_01c750d0(param_1,local_28,local_24,uVar1,uVar2);
  }
  return;
}

