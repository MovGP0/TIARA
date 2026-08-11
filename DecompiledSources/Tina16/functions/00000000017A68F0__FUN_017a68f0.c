/* Ghidra address: 017a68f0 */
/* Ghidra symbol: FUN_017a68f0 */


char FUN_017a68f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [39];
  char local_41;
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  
  iVar2 = FUN_006decb0(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550));
  lVar4 = (longlong)iVar2;
  local_30 = FUN_004095c0(lVar4);
  uVar3 = FUN_004095c0(lVar4);
  local_40 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x6f0) + 0x550));
  cVar1 = FUN_006dd2b0();
  local_41 = cVar1 == '\0';
  if (!(bool)local_41) {
    local_41 = FUN_017a67d0(auStack_68,local_40);
    if (local_41 == '\0') {
      local_34 = 0;
      FUN_0040d200(local_30,lVar4,0);
      FUN_0040d200(uVar3,lVar4,0);
      FUN_017a6870(auStack_68,local_40);
      FUN_00409a70(local_30,uVar3,(longlong)iVar2);
      local_40 = FUN_006dd3e0(local_40);
      cVar1 = FUN_006dd2b0(local_40);
      if (cVar1 != '\0') {
        local_34 = 0;
        FUN_0040d200(local_30,lVar4,0);
        FUN_017a6870(auStack_68,local_40);
        cVar1 = FUN_0043e2c0(local_30,uVar3,iVar2);
        local_41 = cVar1 == '\0';
      }
      local_40 = FUN_006dd3e0(local_40);
      if (local_41 == '\0') {
        cVar1 = FUN_006dd2b0(local_40);
        if (cVar1 != '\0') {
          local_34 = 0;
          FUN_0040d200(local_30,(longlong)iVar2,0);
          FUN_017a6870(auStack_68,local_40);
          cVar1 = FUN_0043e2c0(local_30,uVar3,iVar2);
          local_41 = cVar1 == '\0';
        }
      }
    }
  }
  FUN_004095f0(local_30);
  FUN_004095f0(uVar3);
  return local_41;
}

